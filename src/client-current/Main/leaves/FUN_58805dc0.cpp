// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58805DC0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_58805dc0() {
    __asm {
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr [ebp + 104h]
        push edi
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [eax + edi*4]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        xor esi, esi
        cmp dword ptr [eax + edi*4 + 438h], esi
        ; Exact mapped bytes 7E 52: jle 0x58805e39
        __asm _emit 0x7e
        __asm _emit 0x52
        push ebx
        mov ebx, edi
        shl ebx, 0dh
        add ebx, 458h
        mov ecx, dword ptr [ebx + eax + 4]
        mov edx, dword ptr [ebx + eax]
        mov eax, dword ptr [ebp + 108h]
        push ecx
        mov ecx, dword ptr [eax + edi*4]
        mov ecx, dword ptr [ecx + esi*4]
        push edx
        ; Exact mapped bytes E8 83 D4 0F 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd4
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 108h]
        mov eax, dword ptr [edx + edi*4]
        mov eax, dword ptr [eax + esi*4]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        inc esi
        add ebx, 8
        cmp esi, dword ptr [eax + edi*4 + 438h]
        ; Exact mapped bytes 7C C3: jl 0x58805df3
        __asm _emit 0x7c
        __asm _emit 0xc3
        cmp esi, 400h
        pop ebx
        ; Exact mapped bytes 7D 26: jge 0x58805e5f
        __asm _emit 0x7d
        __asm _emit 0x26
        lea eax, [esi*4]
        mov ecx, dword ptr [ebp + 108h]
        mov edx, dword ptr [ecx + edi*4]
        mov ecx, dword ptr [eax + edx]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        add eax, 4
        cmp eax, 1000h
        ; Exact mapped bytes 7C E1: jl 0x58805e40
        __asm _emit 0x7c
        __asm _emit 0xe1
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
