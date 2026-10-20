// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056154C .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_0056154c_0056154C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0fdh
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FA 8C F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 0E: je 0x56157d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [eax + 5ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 02: je 0x56157f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 25: jmp 0x5615a4
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 A7 52 F7 FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x52
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5615a4
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
