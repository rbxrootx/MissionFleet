// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C5E0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5850c5e0_5850C5E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 F2 E1 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 A2 E9 FF FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5850c622
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes E8 D3 E1 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 19: jmp 0x5850c63b
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 CC FF FF: call 0x58509270
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [eax]
        movzx edx, cl
        push edx
        ; Exact mapped bytes E8 4B 8E FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
