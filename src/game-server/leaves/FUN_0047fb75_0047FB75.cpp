// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047FB75 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0047fb75_0047FB75() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47fb9e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 32h
        ; Exact mapped bytes 7D 65: jge 0x47fc09
        __asm _emit 0x7d
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 370h
        cmp dword ptr [eax + ecx + 16bdch], 0
        ; Exact mapped bytes 75 33: jne 0x47fbf6
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 370h
        mov eax, dword ptr [ecx + edx + 16be0h]
        shr eax, 0ah
        and eax, 3fffffh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 1f0h], eax
        ; Exact mapped bytes EB 11: jmp 0x47fc07
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 1f0h], 0ffffffffh
        ; Exact mapped bytes EB 8C: jmp 0x47fb95
        __asm _emit 0xeb
        __asm _emit 0x8c
        mov esp, ebp
        pop ebp
        ret
    }
}
