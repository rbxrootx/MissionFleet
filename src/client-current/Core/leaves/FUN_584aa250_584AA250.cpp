// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA250 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_584aa250_584AA250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 8
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 12 DE FD FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584aa27a
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 57 85 FF FF: call 0x584a27d0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        add edx, 8
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 01 DF FD FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 38 D7 FD FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x584aa2b1
        __asm _emit 0x74
        __asm _emit 0x12
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 99 D7 FD FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 02 6B FF FF: call 0x584a0db0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C0: jmp 0x584aa271
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov esp, ebp
        pop ebp
        ret
    }
}
