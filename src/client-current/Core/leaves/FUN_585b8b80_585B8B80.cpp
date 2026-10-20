// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B8B80 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_585b8b80_585B8B80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e0ch], 2000h
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 74 FF FF: call 0x585affc0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x585b8c05
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e14h], 0ffffh
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 74 FF FF: call 0x585affc0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dc8h]
        ; Exact mapped bytes E8 8A BD EC FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xbd
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 28: je 0x585b8c05
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dc8h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0dc8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0dc8h]
        ; Exact mapped bytes E8 BC CE EC FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xce
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 F9 FF FF: call 0x585b8550
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
