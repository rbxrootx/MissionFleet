// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519A2C .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_00519a2c_00519A2C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 07: je 0x519a45
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x519b05
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 01 84 01 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 2C BD 68 00: call dword ptr [0x68bd2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 40 22 01 00: call 0x52bca3
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F8 08 00 00: call 0x51a36b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 07: jge 0x519a83
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x519b05
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3F 01 00 00: call 0x519bce
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 75 37: jne 0x519acf
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 8
        ; Exact mapped bytes E8 7F 89 01 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x519acf
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x519acf
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 9
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 72 14: jb 0x519ae9
        __asm _emit 0x72
        __asm _emit 0x14
        push 137h
        push 67598ch
        ; Exact mapped bytes E8 5C F2 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519ae9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x519acf
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax*4 + 686d74h]
        push ecx
        ; Exact mapped bytes FF 15 30 BD 68 00: call dword ptr [0x68bd30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
