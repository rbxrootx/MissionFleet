// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004295DA .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_004295da_004295DA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x429623
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 09 00 00: call 0x429f8d
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB E1: jmp 0x429604
        __asm _emit 0xeb
        __asm _emit 0xe1
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 C3 B7 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
