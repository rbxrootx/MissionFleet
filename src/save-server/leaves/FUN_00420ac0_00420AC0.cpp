// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420AC0 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00420ac0_00420AC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b618h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 54h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp + 10h]
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 1], cl
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [ebp - 14h]
        mov byte ptr [eax + 2], cl
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 DC 09 FE FF: call 0x4014fb
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 D5 07 FE FF: call 0x40130c
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6E 0E FE FF: call 0x4019b5
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 54h
        cmp ebp, esp
        ; Exact mapped bytes E8 88 42 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
