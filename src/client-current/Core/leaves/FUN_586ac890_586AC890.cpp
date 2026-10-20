// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AC890 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_586ac890_586AC890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ac8ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 7F: jge 0x586ac930
        __asm _emit 0x7d
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 0f8h]
        ; Exact mapped bytes E8 CD 8F DE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8f
        __asm _emit 0xde
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 61: je 0x586ac92b
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0f8h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 81 DD FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x81
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2C 90 DD FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x90
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x586ac92b
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0f8h]
        ; Exact mapped bytes E8 96 FB FF FF: call 0x586ac4a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x586ac92b
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 80 DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x80
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 48 FF FF FF: call 0x586ac870
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x586ac930
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x586ac8a2
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
