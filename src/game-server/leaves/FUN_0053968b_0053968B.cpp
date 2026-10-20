// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053968B .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_0053968b_0053968B() {
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
        ; Exact mapped bytes 75 14: jne 0x5396b2
        __asm _emit 0x75
        __asm _emit 0x14
        push 301h
        push 581fc0h
        ; Exact mapped bytes E8 53 B3 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5396b2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x539695
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 A0 78 FF FF: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 E1 78 FF FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
