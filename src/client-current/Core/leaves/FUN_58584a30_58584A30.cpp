// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58584A30 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_58584a30_58584A30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1db8h]
        ; Exact mapped bytes E8 79 1F F0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58584a57
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 76 F0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x76
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2F: je 0x58584a8c
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B 74 F0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C FD FF FF: call 0x58584790
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        nop
        ; Exact mapped bytes EB C0: jmp 0x58584a4c
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
