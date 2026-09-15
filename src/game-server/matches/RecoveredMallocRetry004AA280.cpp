// Exact recovered game-server malloc retry wrapper.
extern "C" void Call004AA300();
extern "C" void Call004B51F0();
extern "C" void Call004B5290();
extern "C" void Call004B5560();
extern "C" __declspec(naked) void Recovered004AA280()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm retry:
    __asm push 9
    __asm call Call004B51F0
    __asm add esp, 4
    __asm mov eax, dword ptr [ebp+24]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+20]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+16]
    __asm push edx
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm call Call004AA300
    __asm add esp, 16
    __asm mov dword ptr [ebp-4], eax
    __asm push 9
    __asm call Call004B5290
    __asm add esp, 4
    __asm cmp dword ptr [ebp-4], 0
    __asm jne return_result
    __asm cmp dword ptr [ebp+12], 0
    __asm jne retry_callback
    __asm return_result:
    __asm mov eax, dword ptr [ebp-4]
    __asm jmp short finished
    __asm retry_callback:
    __asm mov ecx, dword ptr [ebp+8]
    __asm push ecx
    __asm call Call004B5560
    __asm add esp, 4
    __asm test eax, eax
    __asm jne retry_jump
    __asm xor eax, eax
    __asm jmp short finished
    __asm retry_jump:
    __asm jmp short retry
    __asm finished:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
