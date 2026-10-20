// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411916 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00411916_00411916() {
    __asm {
        mov eax, 43a3bdh
        ; Exact mapped bytes E8 E8 DC 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        push edi
        push 14h
        ; Exact mapped bytes E8 C2 BF 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 10h], ecx
        and dword ptr [ebp - 4], 0
        mov edi, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x411945
        __asm _emit 0x74
        __asm _emit 0x0a
        push edi
        ; Exact mapped bytes E8 59 00 00 00: call 0x41199a
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x411947
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes 66 83 FF FF: cmp di, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 17: jne 0x411968
        __asm _emit 0x75
        __asm _emit 0x17
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 30: je 0x411987
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [esi]
        push 1
        push dword ptr [ebp + 10h]
        mov ecx, esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes EB 1F: jmp 0x411987
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 66 81 FF E8 03: cmp di, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 7E 18: jle 0x411987
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 66 81 FF 05 04: cmp di, 0x405
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x04
        ; Exact mapped bytes 7D 11: jge 0x411987
        __asm _emit 0x7d
        __asm _emit 0x11
        ; Exact mapped bytes 0F BF C7: movsx eax, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc7
        add eax, 0ee98h
        lea ecx, [esi + 0ch]
        push eax
        ; Exact mapped bytes E8 F6 0B 02 00: call 0x43257d
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp + 0ch]
        push 443350h
        push eax
        mov dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes E8 8F DC 00 00: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
