// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005854A0 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_005854a0_005854A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov ecx, 686a34h
        ; Exact mapped bytes E8 60 81 FB FF: call 0x53d610
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 33: jne 0x5854ef
        __asm _emit 0x75
        __asm _emit 0x33
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5854ef
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes E8 82 33 F5 FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x33
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5854ed
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0E: jmp 0x5854fb
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes EB C4: jmp 0x5854b3
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov ecx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [ecx + 0ch], 0
        sete al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
