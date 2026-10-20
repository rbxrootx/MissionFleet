// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00537C79 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00537c79_00537C79() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x537ca0
        __asm _emit 0x75
        __asm _emit 0x14
        push 230h
        push 581fc0h
        ; Exact mapped bytes E8 65 CD FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x537ca0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x537c83
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C EA FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 D8 95 FC FF: call 0x501293
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
