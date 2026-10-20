// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057935A .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_0057935a_0057935A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 F7 FF FF: call 0x578acb
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0c2h
        push 67d108h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 DF 0E F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0e
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD 65 FD FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2A: je 0x5793d1
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 38: call dword ptr [eax + 0x38]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x38
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x5793cf
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        ; Exact mapped bytes EB C1: jmp 0x579392
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov esp, ebp
        pop ebp
        ret
    }
}
