// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004584CD .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_004584cd_004584CD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 11: je 0x4584eb
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 38h]
        ; Exact mapped bytes E8 B7 68 FF FF: call 0x44eda0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3D: jmp 0x458528
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 CA F9 FF FF: call 0x457ec0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        neg ecx
        sbb ecx, ecx
        and ecx, 10h
        add ecx, 10h
        mov edx, dword ptr [ebp - 4]
        and edx, ecx
        test edx, edx
        ; Exact mapped bytes 74 19: je 0x458528
        __asm _emit 0x74
        __asm _emit 0x19
        push 1
        xor eax, eax
        cmp dword ptr [ebp + 0ch], 0
        setne al
        push eax
        push 0f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 31 0D 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x31
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
