// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856CAB0 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_5856cab0_5856CAB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 57 F1 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a97b8h
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 2A: jne 0x5856cb11
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], 0
        ; Exact mapped bytes EB 2F: jmp 0x5856cb40
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 64h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 20h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 68h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 20h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 6ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 20h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 70h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 28h]
        mov byte ptr [eax + 61h], cl
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 8ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
