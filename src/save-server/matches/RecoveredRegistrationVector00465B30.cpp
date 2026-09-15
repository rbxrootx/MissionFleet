// Exact recovered static-registration vector append operation.
extern "C" void Call00466CB0();
extern "C" void Call004677E0();
extern "C" void Call0046A180();
extern "C" void Call0046A190();
extern "C" int Data0063E118;
extern "C" int Data00688DBC;
extern "C" int Data00688DC0;
extern "C" __declspec(naked) void Recovered00465B30()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm call Call0046A180
    __asm push 2
    __asm mov eax, dword ptr [Data00688DC0]
    __asm push eax
    __asm call Call004677E0
    __asm add esp, 8
    __asm mov ecx, dword ptr [Data00688DBC]
    __asm sub ecx, dword ptr [Data00688DC0]
    __asm add ecx, 4
    __asm cmp eax, ecx
    __asm jae capacity_ready
    __asm push 104
    __asm push offset Data0063E118
    __asm push 2
    __asm push 2
    __asm mov edx, dword ptr [Data00688DC0]
    __asm push edx
    __asm call Call004677E0
    __asm add esp, 8
    __asm add eax, 16
    __asm push eax
    __asm mov eax, dword ptr [Data00688DC0]
    __asm push eax
    __asm call Call00466CB0
    __asm add esp, 20
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm jne allocation_ready
    __asm call Call0046A190
    __asm xor eax, eax
    __asm jmp short finished
    __asm allocation_ready:
    __asm mov ecx, dword ptr [Data00688DBC]
    __asm sub ecx, dword ptr [Data00688DC0]
    __asm sar ecx, 2
    __asm mov edx, dword ptr [ebp-4]
    __asm lea eax, [edx+ecx*4]
    __asm mov dword ptr [Data00688DBC], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [Data00688DC0], ecx
    __asm capacity_ready:
    __asm mov edx, dword ptr [Data00688DBC]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [edx], eax
    __asm mov ecx, dword ptr [Data00688DBC]
    __asm add ecx, 4
    __asm mov dword ptr [Data00688DBC], ecx
    __asm call Call0046A190
    __asm mov eax, dword ptr [ebp+8]
    __asm finished:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
