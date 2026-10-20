// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00539819 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_00539819_00539819() {
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
        ; Exact mapped bytes 75 14: jne 0x539840
        __asm _emit 0x75
        __asm _emit 0x14
        push 310h
        push 581fc0h
        ; Exact mapped bytes E8 C5 B1 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x539840
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x539823
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 06 77 FF FF: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 47 77 FF FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 4C 28 5E 00: call dword ptr [0x5e284c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B BE FF FF: call 0x53569d
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
