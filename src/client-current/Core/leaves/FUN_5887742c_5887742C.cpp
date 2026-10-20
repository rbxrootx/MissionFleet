// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887742C .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_5887742c_5887742C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0f4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 17 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        push 78h
        mov esi, eax
        xor ebx, ebx
        lea eax, [ebp - 0f4h]
        mov ecx, 1001h
        push eax
        push 3
        cmp dword ptr [esi + 60h], ebx
        pop eax
        cmovne ecx, eax
        push ecx
        push edi
        ; Exact mapped bytes E8 4A 83 FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x58877478
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 58h], ebx
        inc eax
        ; Exact mapped bytes EB 52: jmp 0x588774ca
        __asm _emit 0xeb
        __asm _emit 0x52
        lea eax, [ebp - 0f4h]
        push eax
        push dword ptr [esi + 50h]
        ; Exact mapped bytes E8 29 C8 FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x588774bf
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, edi
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 F5: jne 0x58877492
        __asm _emit 0x75
        __asm _emit 0xf5
        sub ecx, edx
        sar ecx, 1
        lea eax, [ecx + 1]
        push eax
        push edi
        lea eax, [esi + 2a0h]
        push 55h
        push eax
        ; Exact mapped bytes E8 BC EA FE FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x588774db
        __asm _emit 0x75
        __asm _emit 0x20
        or dword ptr [esi + 58h], 4
        mov eax, dword ptr [esi + 58h]
        shr eax, 2
        not eax
        and eax, 1
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 79 9B FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9b
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 F4 9A FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
