// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471665 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_00471665_00471665() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 7E 3E 0C 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x3e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 47 71 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 9ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 D4 6F FF FF: call 0x468695
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes E8 11 2C F9 FF: call 0x4042e5
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        ; Exact mapped bytes E8 F1 8D F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        ; Exact mapped bytes E8 E6 8D F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ch
        ; Exact mapped bytes E8 DB 8D F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xff
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 E0 70 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
