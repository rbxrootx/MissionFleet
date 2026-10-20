// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00539E32 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_00539e32_00539E32() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x539e5b
        __asm _emit 0x75
        __asm _emit 0x14
        push 355h
        push 581fc0h
        ; Exact mapped bytes E8 AA AB FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x539e5b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x539e3e
        __asm _emit 0x75
        __asm _emit 0xdd
        push 100h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A 41 FB FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 100h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 84 1F 5E 00: call dword ptr [0x5e1f84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 42 FB FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
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
