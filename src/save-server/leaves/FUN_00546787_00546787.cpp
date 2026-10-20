// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00546787 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_00546787_00546787() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 5eh
        push 67ad48h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BF 3A F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 11: je 0x5467bb
        __asm _emit 0x74
        __asm _emit 0x11
        push 5fh
        push 67ad48h
        ; Exact mapped bytes E8 8A 25 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5467bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5467a1
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 3ch
        push eax
        ; Exact mapped bytes FF 15 AC C2 68 00: call dword ptr [0x68c2ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5467e5
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 1
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x5467e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
