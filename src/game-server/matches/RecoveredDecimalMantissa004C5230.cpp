extern "C" void Recovered004C5160();
extern "C" void Recovered004C50B0();
// Exact recovered decimal mantissa builder.
extern "C" __declspec(naked) void Recovered004C5230()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 10h
    __asm mov word ptr [ebp-10h], 404eh
    __asm mov eax, dword ptr [ebp+10h]
    __asm mov dword ptr [eax], 0
    __asm mov ecx, dword ptr [ebp+10h]
    __asm mov dword ptr [ecx+4], 0
    __asm mov edx, dword ptr [ebp+10h]
    __asm mov dword ptr [edx+8], 0
    __asm jmp digit_test
    __asm digit_next:
    __asm mov eax, dword ptr [ebp+0ch]
    __asm sub eax, 1
    __asm mov dword ptr [ebp+0ch], eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm add ecx, 1
    __asm mov dword ptr [ebp+8], ecx
    __asm digit_test:
    __asm cmp dword ptr [ebp+0ch], 0
    __asm jbe normalize16
    __asm mov edx, dword ptr [ebp+10h]
    __asm mov eax, dword ptr [edx]
    __asm mov dword ptr [ebp-0ch], eax
    __asm mov ecx, dword ptr [edx+4]
    __asm mov dword ptr [ebp-8], ecx
    __asm mov edx, dword ptr [edx+8]
    __asm mov dword ptr [ebp-4], edx
    __asm mov eax, dword ptr [ebp+10h]
    __asm push eax
    __asm call Recovered004C5160
    __asm add esp, 4
    __asm mov ecx, dword ptr [ebp+10h]
    __asm push ecx
    __asm call Recovered004C5160
    __asm add esp, 4
    __asm lea edx, [ebp-0ch]
    __asm push edx
    __asm mov eax, dword ptr [ebp+10h]
    __asm push eax
    __asm call Recovered004C50B0
    __asm add esp, 8
    __asm mov ecx, dword ptr [ebp+10h]
    __asm push ecx
    __asm call Recovered004C5160
    __asm add esp, 4
    __asm mov edx, dword ptr [ebp+8]
    __asm movsx eax, byte ptr [edx]
    __asm mov dword ptr [ebp-0ch], eax
    __asm mov dword ptr [ebp-8], 0
    __asm mov dword ptr [ebp-4], 0
    __asm lea ecx, [ebp-0ch]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+10h]
    __asm push edx
    __asm call Recovered004C50B0
    __asm add esp, 8
    __asm jmp digit_next
    __asm normalize16:
    __asm mov eax, dword ptr [ebp+10h]
    __asm cmp dword ptr [eax+8], 0
    __asm jne normalize1
    __asm mov ecx, dword ptr [ebp+10h]
    __asm mov edx, dword ptr [ecx+4]
    __asm shr edx, 10h
    __asm mov eax, dword ptr [ebp+10h]
    __asm mov dword ptr [eax+8], edx
    __asm mov ecx, dword ptr [ebp+10h]
    __asm mov edx, dword ptr [ecx+4]
    __asm shl edx, 10h
    __asm mov eax, dword ptr [ebp+10h]
    __asm mov ecx, dword ptr [eax]
    __asm shr ecx, 10h
    __asm or edx, ecx
    __asm mov eax, dword ptr [ebp+10h]
    __asm mov dword ptr [eax+4], edx
    __asm mov ecx, dword ptr [ebp+10h]
    __asm mov edx, dword ptr [ecx]
    __asm shl edx, 10h
    __asm mov eax, dword ptr [ebp+10h]
    __asm mov dword ptr [eax], edx
    __asm mov cx, word ptr [ebp-10h]
    __asm sub cx, 10h
    __asm mov word ptr [ebp-10h], cx
    __asm jmp normalize16
    __asm normalize1:
    __asm mov edx, dword ptr [ebp+10h]
    __asm mov eax, dword ptr [edx+8]
    __asm and eax, 8000h
    __asm test eax, eax
    __asm jne store
    __asm mov ecx, dword ptr [ebp+10h]
    __asm push ecx
    __asm call Recovered004C5160
    __asm add esp, 4
    __asm mov dx, word ptr [ebp-10h]
    __asm sub dx, 1
    __asm mov word ptr [ebp-10h], dx
    __asm jmp normalize1
    __asm store:
    __asm mov eax, dword ptr [ebp+10h]
    __asm mov cx, word ptr [ebp-10h]
    __asm mov word ptr [eax+0ah], cx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
