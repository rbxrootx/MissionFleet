// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780FC0 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_58780fc0_58780FC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 34h
        ; Exact mapped bytes E8 BC 0B 00 00: call 0x58781b90
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 10h
        ; Exact mapped bytes E8 DA 59 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x59
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58780ff6
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD B0 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb0
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 44: je 0x58781040
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DC AE D0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 31: je 0x5878103e
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x58781030
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58781037
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB AB: jmp 0x58780feb
        __asm _emit 0xeb
        __asm _emit 0xab
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 10h
        ; Exact mapped bytes E8 25 0A DE FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x0a
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0ffh
        ; Exact mapped bytes 7D 3E: jge 0x58781093
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58781067
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 24: jge 0x58781093
        __asm _emit 0x7d
        __asm _emit 0x24
        imul eax, dword ptr [ebp - 8], 180h
        add eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9E FD FF FF: call 0x58780e20
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 180h
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB CB: jmp 0x5878105e
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov eax, dword ptr [ebp - 18h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
