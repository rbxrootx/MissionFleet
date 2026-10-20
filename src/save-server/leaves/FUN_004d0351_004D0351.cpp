// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D0351 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_004d0351_004D0351() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, 686d24h
        ; Exact mapped bytes E8 D1 D2 06 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd2
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 FC 02 07 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x07
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x4d0390
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 74 17: je 0x4d0390
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes FF 15 20 BF 68 00: call dword ptr [0x68bf20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 74 0E: je 0x4d03a7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4d03ac
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
