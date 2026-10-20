// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049BEAD .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0049bead_0049BEAD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 11: je 0x49becb
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 38h]
        ; Exact mapped bytes E8 B2 68 FF FF: call 0x49277b
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3D: jmp 0x49bf08
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 CA F9 FF FF: call 0x49b8a0
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
        ; Exact mapped bytes 74 19: je 0x49bf08
        __asm _emit 0x74
        __asm _emit 0x19
        push 1
        xor eax, eax
        cmp dword ptr [ebp + 0ch], 0
        setne al
        push eax
        push 0f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 FC 09 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
