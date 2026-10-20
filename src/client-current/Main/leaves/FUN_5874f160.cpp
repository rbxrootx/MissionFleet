// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874F160 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_5874f160() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5874f1ab
        __asm _emit 0x74
        __asm _emit 0x3f
        xor ecx, ecx
        lea edx, [eax + 9a4h]
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5874f188
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 40 5E: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        xor al, 0aah
        cmp al, 64h
        ; Exact mapped bytes 72 0C: jb 0x5874f194
        __asm _emit 0x72
        __asm _emit 0x0c
        inc ecx
        add edx, 4
        cmp ecx, 20h
        ; Exact mapped bytes 7C E3: jl 0x5874f174
        __asm _emit 0x7c
        __asm _emit 0xe3
        mov al, 1
        ret
        push 0
        push 0
        push 0
        push 3b9h
        ; Exact mapped bytes E8 4C C9 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 85 5B 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        ret
    }
}
