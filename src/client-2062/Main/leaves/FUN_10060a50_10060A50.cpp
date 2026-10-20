// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10060A50 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_10060a50_10060A50() {
    __asm {
        mov dl, byte ptr [esp + 4]
        cmp dl, 0ffh
        ; Exact mapped bytes 75 0F: jne 0x10060a68
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 4C 3E FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov dl, ah
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        push esi
        mov ecx, dword ptr [ecx + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 34: je 0x10060aac
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 66 0F B6 D2: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd2
        mov esi, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 66 8B B6 48 03 00 00: mov si, word ptr [esi + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EE 0D: shr si, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B F2: cmp si, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf2
        ; Exact mapped bytes 75 0A: jne 0x10060a9c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov esi, dword ptr [ecx + 0a0h]
        test esi, esi
        ; Exact mapped bytes 74 0E: je 0x10060aaa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 0b6ch]
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x10060a7c
        __asm _emit 0x75
        __asm _emit 0xd6
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
