// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CE4E .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_0042ce4e_0042CE4E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 71: je 0x42ced3
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 18 00 00: call 0x42e710
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c2ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 19 00 00: call 0x42e7b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 19 00 00: call 0x42e7d0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c2ch]
        ; Exact mapped bytes E8 34 19 00 00: call 0x42e7d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 0c2ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bb0h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bb0h], edx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 467h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 40h]
        ; Exact mapped bytes E8 66 E7 0F 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe7
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 0E 7F 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
