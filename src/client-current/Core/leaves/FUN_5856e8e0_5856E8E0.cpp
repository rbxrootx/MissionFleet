// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856E8E0 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_5856e8e0_5856E8E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push 10000000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A E5 2B 00: call 0x5882ce70
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe5
        __asm _emit 0x2b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a9cbch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5856e911
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 2E: jge 0x5856e945
        __asm _emit 0x7d
        __asm _emit 0x2e
        push 18h
        push 0
        imul edx, dword ptr [ebp - 8], 18h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 130h]
        push ecx
        ; Exact mapped bytes E8 E1 E4 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe4
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 178h], 0ffffffffh
        ; Exact mapped bytes EB C3: jmp 0x5856e908
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 184h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 188h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 190h], 0ffffffffh
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 194h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 198h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 19ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
