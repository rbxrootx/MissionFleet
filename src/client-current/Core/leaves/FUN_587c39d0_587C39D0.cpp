// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C39D0 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_587c39d0_587C39D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 2B: je 0x587c3a0b
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A FF FF FF: call 0x587c3960
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 26: je 0x587c3a3a
        __asm _emit 0x74
        __asm _emit 0x26
        push -1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes FF 15 28 41 89 58: call dword ptr [0x58894128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 0
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
