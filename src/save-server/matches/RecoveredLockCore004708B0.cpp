// Exact recovered indexed lock core.
extern "C" int Table0067DE00;
extern "C" int Source0063EE60;
extern "C" void *Import0068B974;
extern "C" void *Import0068B968;
extern "C" void Call00466390();
extern "C" void Call004667C0();
extern "C" void Call00467360();
extern "C" void Call004708B0();
extern "C" void Call00470950();
extern "C" __declspec(naked) void Recovered004708B0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm cmp dword ptr [eax*4+Table0067DE00], 0
    __asm jne lock_ready
    __asm push 225
    __asm push offset Source0063EE60
    __asm push 2
    __asm push 24
    __asm call Call004667C0
    __asm add esp, 16
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm jne retry_locked
    __asm push 17
    __asm call Call00466390
    __asm add esp, 4
    __asm retry_locked:
    __asm push 17
    __asm call Call004708B0
    __asm add esp, 4
    __asm mov ecx, dword ptr [ebp+8]
    __asm cmp dword ptr [ecx*4+Table0067DE00], 0
    __asm jne dispose
    __asm mov edx, dword ptr [ebp-4]
    __asm push edx
    __asm call dword ptr [Import0068B974]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [eax*4+Table0067DE00], ecx
    __asm jmp short created
    __asm dispose:
    __asm push 2
    __asm mov edx, dword ptr [ebp-4]
    __asm push edx
    __asm call Call00467360
    __asm add esp, 8
    __asm created:
    __asm push 17
    __asm call Call00470950
    __asm add esp, 4
    __asm lock_ready:
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax*4+Table0067DE00]
    __asm push ecx
    __asm call dword ptr [Import0068B968]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
