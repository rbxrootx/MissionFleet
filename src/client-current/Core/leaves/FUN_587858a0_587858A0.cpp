// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587858A0 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_587858a0_587858A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 61h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 17: je 0x587858cd
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes E8 E5 08 00 00: call 0x587861a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D6 02 00 00: call 0x58785ba0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 42: jmp 0x5878590f
        __asm _emit 0xeb
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8A F9 FF FF: call 0x58785270
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 8F F0 CF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf0
        __asm _emit 0xcf
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 01 00 00: call 0x58785a80
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A1 08 00 00: call 0x587861a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 92 02 00 00: call 0x58785ba0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
