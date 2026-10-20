// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58672350 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58672350_58672350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 04: jne 0x58672363
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 31: jmp 0x58672394
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 27 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x27
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x58672392
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 AC 3B E1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3b
        __asm _emit 0xe1
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 52 3B E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x3b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x58672394
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
