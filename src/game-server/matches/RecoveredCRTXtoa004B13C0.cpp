// Exact shared VC6 integer-to-text helper.
extern "C" __declspec(naked) void Recovered004B13C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 10h
    __asm mov eax, dword ptr [ebp+0ch]
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp+14h], 0
    __asm je magnitude
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov byte ptr [ecx], 2dh
    __asm mov edx, dword ptr [ebp-4]
    __asm add edx, 1
    __asm mov dword ptr [ebp-4], edx
    __asm mov eax, dword ptr [ebp+8]
    __asm neg eax
    __asm mov dword ptr [ebp+8], eax
    __asm magnitude:
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ebp-8], ecx
    __asm digit:
    __asm mov eax, dword ptr [ebp+8]
    __asm xor edx, edx
    __asm div dword ptr [ebp+10h]
    __asm mov dword ptr [ebp-0ch], edx
    __asm mov eax, dword ptr [ebp+8]
    __asm xor edx, edx
    __asm div dword ptr [ebp+10h]
    __asm mov dword ptr [ebp+8], eax
    __asm cmp dword ptr [ebp-0ch], 9
    __asm jbe decimal
    __asm mov edx, dword ptr [ebp-0ch]
    __asm add edx, 57h
    __asm mov eax, dword ptr [ebp-4]
    __asm mov byte ptr [eax], dl
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-4], ecx
    __asm jmp continue
    __asm decimal:
    __asm mov edx, dword ptr [ebp-0ch]
    __asm add edx, 30h
    __asm mov eax, dword ptr [ebp-4]
    __asm mov byte ptr [eax], dl
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-4], ecx
    __asm continue:
    __asm cmp dword ptr [ebp+8], 0
    __asm ja digit
    __asm mov edx, dword ptr [ebp-4]
    __asm mov byte ptr [edx], 0
    __asm mov eax, dword ptr [ebp-4]
    __asm sub eax, 1
    __asm mov dword ptr [ebp-4], eax
    __asm reverse:
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dl, byte ptr [ecx]
    __asm mov byte ptr [ebp-10h], dl
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp-8]
    __asm mov dl, byte ptr [ecx]
    __asm mov byte ptr [eax], dl
    __asm mov eax, dword ptr [ebp-8]
    __asm mov cl, byte ptr [ebp-10h]
    __asm mov byte ptr [eax], cl
    __asm mov edx, dword ptr [ebp-4]
    __asm sub edx, 1
    __asm mov dword ptr [ebp-4], edx
    __asm mov eax, dword ptr [ebp-8]
    __asm add eax, 1
    __asm mov dword ptr [ebp-8], eax
    __asm mov ecx, dword ptr [ebp-8]
    __asm cmp ecx, dword ptr [ebp-4]
    __asm jb reverse
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
