// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BA20 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5887ba20_5887BA20() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push eax
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov al, byte ptr [edx]
        or al, al
        ; Exact mapped bytes 74 09: je 0x5887ba43
        __asm _emit 0x74
        __asm _emit 0x09
        add edx, 1
        bts dword ptr [esp], eax
        ; Exact mapped bytes EB F1: jmp 0x5887ba34
        __asm _emit 0xeb
        __asm _emit 0xf1
        mov esi, dword ptr [ebp + 8]
        mov edi, edi
        mov al, byte ptr [esi]
        or al, al
        ; Exact mapped bytes 74 0C: je 0x5887ba5a
        __asm _emit 0x74
        __asm _emit 0x0c
        add esi, 1
        bt dword ptr [esp], eax
        ; Exact mapped bytes 73 F1: jae 0x5887ba48
        __asm _emit 0x73
        __asm _emit 0xf1
        lea eax, [esi - 1]
        add esp, 20h
        pop esi
        leave
        ret
    }
}
