// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857DAB0 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5857dab0_5857DAB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x5857dadd
        __asm _emit 0x74
        __asm _emit 0x20
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 80011011h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 EE 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xee
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1A: jmp 0x5857daf7
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 2
        mov eax, dword ptr [ebp + 8]
        push eax
        push 80011011h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A EE 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xee
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
