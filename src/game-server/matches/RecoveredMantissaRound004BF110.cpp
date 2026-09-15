extern "C" void Recovered004BEFD0();
extern "C" void Recovered004BF060();
// Exact recovered mantissa rounding/truncation helper.
extern "C" __declspec(naked) void Recovered004BF110()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 1ch
    __asm mov dword ptr [ebp-18h], 0
    __asm mov eax, dword ptr [ebp+0ch]
    __asm sub eax, 1
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-0ch], ecx
    __asm mov eax, dword ptr [ebp-0ch]
    __asm cdq
    __asm and edx, 1fh
    __asm add eax, edx
    __asm sar eax, 5
    __asm mov dword ptr [ebp-14h], eax
    __asm mov edx, dword ptr [ebp-0ch]
    __asm and edx, 8000001fh
    __asm jns remainder
    __asm dec edx
    __asm or edx, 0ffffffe0h
    __asm inc edx
    __asm remainder:
    __asm mov eax, 1fh
    __asm sub eax, edx
    __asm mov dword ptr [ebp-8], eax
    __asm mov edx, 1
    __asm mov ecx, dword ptr [ebp-8]
    __asm shl edx, cl
    __asm mov dword ptr [ebp-1ch], edx
    __asm mov eax, dword ptr [ebp-14h]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx+eax*4]
    __asm and edx, dword ptr [ebp-1ch]
    __asm test edx, edx
    __asm je mask_tail
    __asm mov eax, dword ptr [ebp-0ch]
    __asm add eax, 1
    __asm push eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm push ecx
    __asm call Recovered004BEFD0
    __asm add esp, 8
    __asm test eax, eax
    __asm jne mask_tail
    __asm mov edx, dword ptr [ebp-4]
    __asm push edx
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm call Recovered004BF060
    __asm add esp, 8
    __asm mov dword ptr [ebp-18h], eax
    __asm mask_tail:
    __asm or edx, 0ffffffffh
    __asm mov ecx, dword ptr [ebp-8]
    __asm shl edx, cl
    __asm mov eax, dword ptr [ebp-14h]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [ecx+eax*4]
    __asm and eax, edx
    __asm mov ecx, dword ptr [ebp-14h]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov dword ptr [edx+ecx*4], eax
    __asm mov eax, dword ptr [ebp-14h]
    __asm add eax, 1
    __asm mov dword ptr [ebp-10h], eax
    __asm jmp clear_test
    __asm clear_next:
    __asm mov ecx, dword ptr [ebp-10h]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-10h], ecx
    __asm clear_test:
    __asm cmp dword ptr [ebp-10h], 3
    __asm jge done
    __asm mov edx, dword ptr [ebp-10h]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [eax+edx*4], 0
    __asm jmp clear_next
    __asm done:
    __asm mov eax, dword ptr [ebp-18h]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
