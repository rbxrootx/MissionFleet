// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461C49 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_00461c49_00461C49() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 58: je 0x461cbe
        __asm _emit 0x74
        __asm _emit 0x58
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 28 D7 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd7
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 48h
        ; Exact mapped bytes E8 33 FA 0C 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 48h
        ; Exact mapped bytes E8 BA FA 0C 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4ch]
        cmp ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 7C 18: jl 0x461cb2
        __asm _emit 0x7c
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4ch]
        cmp ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes 7D 0A: jge 0x461cb2
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 86 FE FF: call 0x44a3ab
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x461cbe
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DB EE FF FF: call 0x460b99
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 18 6B 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
