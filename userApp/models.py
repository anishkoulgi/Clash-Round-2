from django.db import models
import uuid
from django.contrib.auth.models import User

NO_OF_QUESTIONS = 6


class UserProfile(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE)
    totalScore = models.IntegerField(default=0)
    email1 = models.EmailField(default='example@gmail.com')
    email2 = models.EmailField(default='example@gmail.com')
    phone1 = models.CharField(max_length=10)
    phone2 = models.CharField(max_length=10)
    name1 = models.CharField(max_length=100)
    name2 = models.CharField(max_length=100, null=True)
    junior = models.BooleanField(default=True)           # True if Junior(FE) else False if Senior(SE,TE,BE)
    latestSubTime = models.TimeField(default='00:00')

    def __str__(self):
            return self.user.username


class Question(models.Model):
    titleQue = models.CharField(max_length=50)
    question = models.CharField(max_length=5000)
    totalSub = models.IntegerField(default=0)
    totalSuccessfulSub = models.IntegerField(default=0)
    accuracy = models.IntegerField(default=0)           # accuracy = total Successful submission / total Submission

    def __str__(self):
            return self.titleQue + '-' + self.question

    def IDNumber(self):
        return self.pk


class MultipleQues(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    que = models.ForeignKey(Question, on_delete=models.CASCADE, default="1")
    scoreQuestion = models.IntegerField(default=0)
    attempts = models.IntegerField(default=0)


class Submission(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    que = models.ForeignKey(Question, on_delete=models.CASCADE)
    code = models.CharField(max_length=1000)
    subStatus = models.BooleanField(default=False)           # False for wrong submission and True for Correct
    subTime = models.TimeField(default='00:00')
    subScore = models.IntegerField(default=0)
    correctTestCases = models.IntegerField(default=0)
    TestCasesPercentage = models.IntegerField(default=0)         # (TestCasesPercentage = correctTestCases / 6) * 100

    def __str__(self):
            return self.user.username + ' - ' + self.que.titleQue
