// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588595A0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_588595a0_588595A0() {
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
        ; Exact mapped bytes 74 09: je 0x588595c3
        __asm _emit 0x74
        __asm _emit 0x09
        add edx, 1
        bts dword ptr [esp], eax
        ; Exact mapped bytes EB F1: jmp 0x588595b4
        __asm _emit 0xeb
        __asm _emit 0xf1
        mov esi, dword ptr [ebp + 8]
        or ecx, 0ffffffffh
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        add ecx, 1
        mov al, byte ptr [esi]
        or al, al
        ; Exact mapped bytes 74 09: je 0x588595de
        __asm _emit 0x74
        __asm _emit 0x09
        add esi, 1
        bt dword ptr [esp], eax
        ; Exact mapped bytes 73 EE: jae 0x588595cc
        __asm _emit 0x73
        __asm _emit 0xee
        mov eax, ecx
        add esp, 20h
        pop esi
        leave
        ret
    }
}
