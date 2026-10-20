// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878BC70 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_5878bc70_5878BC70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8D B2 CF FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 8
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F1 B5 CF FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb5
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 E2 B5 CF FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb5
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 3F FE FF FF: call 0x5878baf0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 C2 B5 CF FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb5
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5B FE FF FF: call 0x5878bb30
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 28 FE FF FF: call 0x5878bb10
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        mov esp, ebp
        pop ebp
        ret
    }
}
