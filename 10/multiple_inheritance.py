class A:
	def __init__(self):
		self.a=4
	def display(self):
		print('in class A')
class B:
	def __init__(self):
		self.b=5
	def displayb(self):
		print('in class B')
class C(A, B):
	def __init__(self):
		self.c=6
	def display(self):
		super().display()
c=C()
c.display()
