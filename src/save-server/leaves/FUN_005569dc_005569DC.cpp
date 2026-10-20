// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005569DC .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_005569dc_005569DC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 14: je 0x556a06
        __asm _emit 0x74
        __asm _emit 0x14
        push 144h
        push 67c1ech
        ; Exact mapped bytes E8 3F 23 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556a06
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x5569e6
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
