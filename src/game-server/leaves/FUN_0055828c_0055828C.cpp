// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055828C .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_0055828c_0055828C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 61h
        push 5cfe58h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BD 2E FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 34: je 0x5582e7
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 30h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 1C: jl 0x5582de
        __asm _emit 0x7c
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        push edx
        ; Exact mapped bytes E8 24 51 FF FF: call 0x54d3f2
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 5cfe64h
        ; Exact mapped bytes E8 3C 79 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x79
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 09: jmp 0x5582e7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A3 51 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
