// Exact recovered internal-to-extended-float packer.
extern "C" __declspec(naked) void Recovered0047B380()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 1ch
    __asm mov dword ptr [ebp-0ch], 80000000h
    __asm mov word ptr [ebp-4], 0
    __asm mov eax, dword ptr [ebp+0ch]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax+6]
    __asm and ecx, 7ff0h
    __asm sar ecx, 4
    __asm mov word ptr [ebp-14h], cx
    __asm mov edx, dword ptr [ebp+0ch]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx+6]
    __asm and eax, 8000h
    __asm mov word ptr [ebp-18h], ax
    __asm mov ecx, dword ptr [ebp+0ch]
    __asm mov edx, dword ptr [ecx+4]
    __asm and edx, 0fffffh
    __asm mov dword ptr [ebp-8], edx
    __asm mov eax, dword ptr [ebp+0ch]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp-10h], ecx
    __asm mov edx, dword ptr [ebp-14h]
    __asm and edx, 0ffffh
    __asm mov dword ptr [ebp-1ch], edx
    __asm cmp dword ptr [ebp-1ch], 0
    __asm je zero_exp
    __asm cmp dword ptr [ebp-1ch], 7ffh
    __asm je special
    __asm jmp normal
    __asm special:
    __asm mov word ptr [ebp-4], 7fffh
    __asm jmp compose
    __asm zero_exp:
    __asm cmp dword ptr [ebp-8], 0
    __asm jne denormal
    __asm cmp dword ptr [ebp-10h], 0
    __asm jne denormal
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [eax+4], 0
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [ecx], 0
    __asm mov edx, dword ptr [ebp+8]
    __asm mov word ptr [edx+8], 0
    __asm jmp done
    __asm denormal:
    __asm movsx eax, word ptr [ebp-14h]
    __asm add eax, 3c01h
    __asm mov word ptr [ebp-4], ax
    __asm mov dword ptr [ebp-0ch], 0
    __asm jmp compose
    __asm normal:
    __asm mov cx, word ptr [ebp-14h]
    __asm sub cx, 3ffh
    __asm mov word ptr [ebp-14h], cx
    __asm movsx edx, word ptr [ebp-14h]
    __asm add edx, 3fffh
    __asm mov word ptr [ebp-4], dx
    __asm compose:
    __asm mov eax, dword ptr [ebp-8]
    __asm shl eax, 0bh
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm or ecx, eax
    __asm mov edx, dword ptr [ebp-10h]
    __asm shr edx, 15h
    __asm or ecx, edx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [eax+4], ecx
    __asm mov ecx, dword ptr [ebp-10h]
    __asm shl ecx, 0bh
    __asm mov edx, dword ptr [ebp+8]
    __asm mov dword ptr [edx], ecx
    __asm normalize:
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax+4]
    __asm and ecx, 80000000h
    __asm test ecx, ecx
    __asm jne store_exp
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [edx+4]
    __asm shl eax, 1
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx]
    __asm and edx, 80000000h
    __asm neg edx
    __asm sbb edx, edx
    __asm neg edx
    __asm or eax, edx
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [ecx+4], eax
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [edx]
    __asm shl eax, 1
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [ecx], eax
    __asm mov dx, word ptr [ebp-4]
    __asm sub dx, 1
    __asm mov word ptr [ebp-4], dx
    __asm jmp normalize
    __asm store_exp:
    __asm mov eax, dword ptr [ebp-18h]
    __asm and eax, 0ffffh
    __asm mov ecx, dword ptr [ebp-4]
    __asm and ecx, 0ffffh
    __asm or eax, ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm mov word ptr [edx+8], ax
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
