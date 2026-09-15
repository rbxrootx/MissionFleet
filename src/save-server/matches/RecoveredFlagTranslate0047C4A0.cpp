// Exact recovered runtime flag-to-control-word translator.
extern "C" __declspec(naked) void Recovered0047C4A0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0ch
    __asm mov word ptr [ebp-4], 0
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 10h
    __asm test eax, eax
    __asm je f8
    __asm mov cx, word ptr [ebp-4]
    __asm or cl, 1
    __asm mov word ptr [ebp-4], cx
    __asm f8:
    __asm mov edx, dword ptr [ebp+8]
    __asm and edx, 8
    __asm test edx, edx
    __asm je f4
    __asm mov ax, word ptr [ebp-4]
    __asm or al, 4
    __asm mov word ptr [ebp-4], ax
    __asm f4:
    __asm mov ecx, dword ptr [ebp+8]
    __asm and ecx, 4
    __asm test ecx, ecx
    __asm je f2
    __asm mov dx, word ptr [ebp-4]
    __asm or dl, 8
    __asm mov word ptr [ebp-4], dx
    __asm f2:
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 2
    __asm test eax, eax
    __asm je f1
    __asm mov cx, word ptr [ebp-4]
    __asm or cl, 10h
    __asm mov word ptr [ebp-4], cx
    __asm f1:
    __asm mov edx, dword ptr [ebp+8]
    __asm and edx, 1
    __asm test edx, edx
    __asm je f80000
    __asm mov ax, word ptr [ebp-4]
    __asm or al, 20h
    __asm mov word ptr [ebp-4], ax
    __asm f80000:
    __asm mov ecx, dword ptr [ebp+8]
    __asm and ecx, 80000h
    __asm test ecx, ecx
    __asm je group300
    __asm mov dx, word ptr [ebp-4]
    __asm or dl, 2
    __asm mov word ptr [ebp-4], dx
    __asm group300:
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 300h
    __asm mov dword ptr [ebp-8], eax
    __asm cmp dword ptr [ebp-8], 200h
    __asm ja group_high
    __asm cmp dword ptr [ebp-8], 200h
    __asm je group200
    __asm cmp dword ptr [ebp-8], 0
    __asm je group0
    __asm cmp dword ptr [ebp-8], 100h
    __asm je group100
    __asm jmp group_done
    __asm group_high:
    __asm cmp dword ptr [ebp-8], 300h
    __asm je group300v
    __asm jmp group_done
    __asm group0:
    __asm mov cx, word ptr [ebp-4]
    __asm mov word ptr [ebp-4], cx
    __asm jmp group_done
    __asm group200:
    __asm mov dx, word ptr [ebp-4]
    __asm or dh, 8
    __asm mov word ptr [ebp-4], dx
    __asm jmp group_done
    __asm group100:
    __asm mov ax, word ptr [ebp-4]
    __asm or ah, 4
    __asm mov word ptr [ebp-4], ax
    __asm jmp group_done
    __asm group300v:
    __asm mov cx, word ptr [ebp-4]
    __asm or ch, 0ch
    __asm mov word ptr [ebp-4], cx
    __asm group_done:
    __asm mov edx, dword ptr [ebp+8]
    __asm and edx, 30000h
    __asm mov dword ptr [ebp-0ch], edx
    __asm cmp dword ptr [ebp-0ch], 0
    __asm je mode0
    __asm cmp dword ptr [ebp-0ch], 10000h
    __asm je mode1
    __asm cmp dword ptr [ebp-0ch], 20000h
    __asm je mode2
    __asm jmp mode_done
    __asm mode0:
    __asm mov ax, word ptr [ebp-4]
    __asm or ah, 3
    __asm mov word ptr [ebp-4], ax
    __asm jmp mode_done
    __asm mode1:
    __asm mov cx, word ptr [ebp-4]
    __asm or ch, 2
    __asm mov word ptr [ebp-4], cx
    __asm jmp mode_done
    __asm mode2:
    __asm mov dx, word ptr [ebp-4]
    __asm mov word ptr [ebp-4], dx
    __asm mode_done:
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 40000h
    __asm test eax, eax
    __asm je done
    __asm mov cx, word ptr [ebp-4]
    __asm or ch, 10h
    __asm mov word ptr [ebp-4], cx
    __asm done:
    __asm mov ax, word ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
