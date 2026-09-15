// Exact recovered indexed lock core.
extern "C" int Table005D193C;
extern "C" int Source0058C870;
extern "C" void *Import005E2418;
extern "C" void *Import005E2420;
extern "C" void Call004AA230();
extern "C" void Call004AACC0();
extern "C" void Call004ACD40();
extern "C" void Call004B51F0();
extern "C" void Call004B5290();
extern "C" __declspec(naked) void Recovered004B51F0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm cmp dword ptr [eax*4+Table005D193C], 0
    __asm jne lock_ready
    __asm push 225
    __asm push offset Source0058C870
    __asm push 2
    __asm push 24
    __asm call Call004AA230
    __asm add esp, 16
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm jne retry_locked
    __asm push 17
    __asm call Call004ACD40
    __asm add esp, 4
    __asm retry_locked:
    __asm push 17
    __asm call Call004B51F0
    __asm add esp, 4
    __asm mov ecx, dword ptr [ebp+8]
    __asm cmp dword ptr [ecx*4+Table005D193C], 0
    __asm jne dispose
    __asm mov edx, dword ptr [ebp-4]
    __asm push edx
    __asm call dword ptr [Import005E2418]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [eax*4+Table005D193C], ecx
    __asm jmp short created
    __asm dispose:
    __asm push 2
    __asm mov edx, dword ptr [ebp-4]
    __asm push edx
    __asm call Call004AACC0
    __asm add esp, 8
    __asm created:
    __asm push 17
    __asm call Call004B5290
    __asm add esp, 4
    __asm lock_ready:
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax*4+Table005D193C]
    __asm push ecx
    __asm call dword ptr [Import005E2420]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
