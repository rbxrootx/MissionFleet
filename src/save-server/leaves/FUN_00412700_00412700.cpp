// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412700 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00412700_00412700() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58aef8h
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
        ; Exact mapped bytes E8 32 F3 FE FF: call 0x401a91
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 E3 ED FE FF: call 0x40155a
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 61 F1 FE FF: call 0x4018e8
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf1
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
        ; Exact mapped bytes E8 48 26 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
