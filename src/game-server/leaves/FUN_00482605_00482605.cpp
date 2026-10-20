// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00482605 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_00482605_00482605() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 218h]
        ; Exact mapped bytes E8 FF EC F7 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [eax + 0db4h], 0
        ; Exact mapped bytes 74 60: je 0x48268a
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18f8h]
        ; Exact mapped bytes E8 08 13 0B 00: call 0x53394e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        ; Exact mapped bytes E8 79 6D 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 0
        push 0
        push 800100f0h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 218h]
        ; Exact mapped bytes E8 A1 EC F7 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 A8 4B 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 12 F8 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 70 12 F8 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 31 61 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
