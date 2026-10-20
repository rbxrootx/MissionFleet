// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518B65 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_00518b65_00518B65() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x518b89
        __asm _emit 0x75
        __asm _emit 0x14
        push 586h
        push 674cach
        ; Exact mapped bytes E8 BC 01 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518b89
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x518b6f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        ; Exact mapped bytes E8 FF 3F FB FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 00 00 00: call 0x518bc3
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
