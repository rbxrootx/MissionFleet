// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445EA3 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00445ea3_00445EA3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 20: je 0x445edd
        __asm _emit 0x74
        __asm _emit 0x20
        push 1
        push 0
        push 3efh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 8B 0A 00: call 0x4ee9e5
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 13 08 00 00: call 0x4466f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 F9 28 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
